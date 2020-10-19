import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
      home: Scaffold(
    appBar: AppBar(
      title: Center(child: Text("Cachorritos!")),
      backgroundColor: Colors.black,
    ),
    backgroundColor: Colors.white,
    body: Center(child: Image(image: AssetImage("images/collie.jpg"))),
  )));
}
