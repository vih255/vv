import 'package:flutter/material.dart';

void main() {
  runApp(EvidenceApp());
}

class EvidenceApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      theme: ThemeData.dark(),
      home: EvidenceScreen(),
    );
  }
}

class EvidenceScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Colors.black,
        leading: Icon(Icons.arrow_back, color: Colors.green),
        actions: [Icon(Icons.search, color: Colors.white)],
      ),
      backgroundColor: Colors.black,
      body: ListView(
        padding: EdgeInsets.all(16),
        children: [
          buildEvidenceCard("Evidence No: PE1110320242345"),
          buildEvidenceCard("Officer: Prakash Singh"),
          buildEvidenceCard("Time: 12:34 PM\nDate: 12/3/2024"),
          buildEvidenceCard("Type: Physical Evidence"),
          buildEvidenceCard("Handed to: K. Vikas Gowda"),
        ],
      ),
      bottomNavigationBar: BottomNavigationBar(
        backgroundColor: Colors.black,
        items: [
          BottomNavigationBarItem(icon: Icon(Icons.home, color: Colors.white), label: ''),
          BottomNavigationBarItem(icon: Icon(Icons.more_horiz, color: Colors.white), label: ''),
        ],
      ),
    );
  }

  Widget buildEvidenceCard(String text) {
    return Card(
      color: Colors.grey[900],
      margin: EdgeInsets.only(bottom: 10),
      child: ListTile(
        leading: CircleAvatar(backgroundColor: Colors.green, radius: 10),
        title: Text(text, style: TextStyle(color: Colors.white)),
        trailing: Icon(Icons.chevron_right, color: Colors.white),
      ),
    );
  }
}
