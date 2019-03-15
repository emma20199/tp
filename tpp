package com.example.tp2;

import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import org.w3c.dom.Text;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    Button B1, B2, B3;
    TextView T;
    int X=1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        B1 = (Button) findViewById(R.id.button);
        B2 = (Button) findViewById(R.id.button2);
        B3 = (Button) findViewById(R.id.button3);

        T = (TextView) findViewById(R.id.textView);

        B1.setOnClickListener(this);
        B2.setOnClickListener(this);
        B3.setOnClickListener(this);



    }

    @Override
    public void onClick(View v) {

        if (v.getId()==B1.getId())
        {
            T.setText("Bonjour");
        }

        else if (v.getId()==B2.getId())
        {
            T.setText("Nombre Click " +X);
            X++;
        }

        else if (v.getId()==B3.getId())
        {
            T.setBackgroundColor(Color.BLUE);
        }

    }
}
