package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import android.view.View;
import android.widget.Button;

import com.example.myapplication.databinding.ActivityMainBinding;


public class MainActivity extends AppCompatActivity {

    // Used to load the 'myapplication' library on application startup.
    static {
        System.loadLibrary("qrs_detection_app");
    }
    private String file_config_path;
    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        TextView tv = binding.sampleText;
        Button myButton = findViewById(R.id.button);

//        tv.setText(stringFromJNI(file_config_path));
//        String resources_path = getExternalFilesDir("").getAbsolutePath() + "/resources/model/qrsdet-model.onnx";
        String resources_path = getExternalFilesDir("").getAbsolutePath() + "/resources";
//        file_config_path = resources_path + "/configs/QRS_Config.txt";
        Utils.copyDirectoryFromAssets(this, "resources", resources_path);
        file_config_path=resources_path+"/data/data_100.npz";
        // reload();
        myButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // Handle button click
                // Example: Show a toast message
                tv.setText(stringFromJNITFLITE(file_config_path));
            }
        });
    }

    /**
     * A native method that is implemented by the 'myapplication' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI(String file_config_path);
    public native String stringFromJNITFLITE(String file_config_path);
}