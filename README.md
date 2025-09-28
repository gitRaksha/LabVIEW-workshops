# 🚀 LabVIEW Workshops

<p align="center">
  <img src="https://img.shields.io/badge/LabVIEW-FFA500?style=for-the-badge&logo=labview&logoColor=white" alt="LabVIEW"/>
  <img src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white" alt="Arduino"/>
  <img src="https://img.shields.io/badge/Proteus-2D2D2D?style=for-the-badge&logo=code&logoColor=white" alt="Proteus"/>
  <img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white" alt="GitHub"/>
</p>

This repository contains a series of workshops I completed to learn **LabVIEW** and its integration with **Arduino** and **Proteus**.
They cover everything from the basics to advanced applications, with a focus on **dataflow programming, reusability, and hardware simulation**.

---

## 🛠️ Setup & Requirements

To get started, you’ll need the following software:

* **LabVIEW 2024 Q3** (or newer)
* **Arduino IDE** (for compiling and uploading sketches)
* **Proteus** (for circuit simulation and Arduino co-simulation)
* **Virtual COM driver** (to connect LabVIEW with Proteus/Arduino)

---

## 📚 Workshop Contents

* **TP0 – Getting Started**
  Beginner-friendly introduction to LabVIEW: front panel, block diagram, controls & indicators.

* **TP1 – Counter & Drill Automation**
  7-segment counter with variable speed and an industrial drill simulation with sensors.

* **TP2 – Reusable SubVI**
  How to design and implement **SubVIs** for modular and reusable LabVIEW code.

* **TP3 – Traffic Lights & LED Matrix**
  Traffic light controller with day/night modes and LED matrix animation with counting system.

* **TP4 – Arduino LED Control via LabVIEW**
  Simulation of Arduino controlling an LED in **Proteus**, managed through LabVIEW.

* **TP5 – Advanced Arduino Integration**
  Extended version of TP4 with more complex logic and real-time control.

---

## 🎯 Learning Outcomes

* Understand **LabVIEW dataflow** and graphical programming.
* Build **front panels and block diagrams** for interactive applications.
* Learn **modularity** with reusable SubVIs.
* Simulate **Arduino hardware inside Proteus**, controlled via LabVIEW.
* Gain experience in **integrating multiple tools** (LabVIEW + Proteus + Arduino IDE).

---

## ⚡ License

This project is licensed under the **MIT License** – feel free to use, modify, and share.

---

## 📂 Project Structure

```text

.
├── Projects_guide
│   ├── pdf_lessons
│   │   ├── Exercices TP0 (1).pdf
│   │   ├── Lesson 2 - Navigating LabVIEW.pdf
│   │   ├── TP1-CAO-Electronique.pdf
│   │   ├── TP2.pdf
│   │   ├── TP3-CAO-Electronique.pdf
│   │   └── TP5.pdf
│   └── videos
│       ├── Enoncé_TP4_LABVIEW_ISIS_Commande_LED.mp4
│       ├── EX2_TP3.mp4
│       ├── Introduction to labview.mp4
│       ├── Tutoriel Commande_3LEDS.mp4
│       └── WhatsApp Vidéo 2025-04-27 à 20.49.34_47c12490.mp4
├── TP0
│   ├── EX1.vi
│   ├── EX2.vi
│   ├── EX3.vi
│   ├── EX5.vi
│   ├── EX5 with EVENT STRUCTURE.vi
│   ├── EX6.vi
│   ├── EX6 with EVENT STRUCTURE.vi
│   ├── TP0.aliases
│   ├── TP0.lvlps
│   ├── TP0.lvproj
│   └── TP1.lvlps
├── TP1
│   ├── TP1 ex1
│   │   ├── EX1.vi
│   │   ├── TP1.aliases
│   │   ├── TP1.dragon
│   │   ├── TP1.lvlps
│   │   └── TP1.lvproj
│   └── TP1 ex2
│       ├── capteur.ctl
│       ├── ejector.ctl
│       ├── EX2.vi
│       ├── Meche.ctl
│       ├── switch.ctl
│       ├── Tapis avec piece.ctl
│       ├── TP1.aliases
│       ├── TP1.lvlps
│       └── TP1.lvproj
├── TP2
│   ├── Création_documentation_VI
│   │   ├── Alerte_Temperature.vi
│   │   ├── TP2.aliases
│   │   ├── TP2.lvlps
│   │   └── TP2.lvproj
│   └── Icone_panneau_de_connexion
│       ├── Alerte_Temperature (Sub) icon test.vi
│       └── Alerte_Temperature (Sub).vi
├── TP3
│   ├── TP3 ex1
│   │   ├── Cars.ctl
│   │   ├── ex1.vi
│   │   ├── image utilisè
│   │   │   ├── 4723cedb-90d0-45b9-8bef-f247e2ce25ad_removalai_preview.png
│   │   │   ├── b8fa4bb2-9ad7-47d5-be5e-892fe7135ede_removalai_preview.png
│   │   │   ├── cb8d9587-88b6-40c5-8171-7cc96879cce4_removalai_preview.png
│   │   │   ├── f64f33a2-3767-4286-a888-90cf422f22f1_removalai_preview.png
│   │   │   ├── istockphoto-1256522274-612x612-removebg-preview.png
│   │   │   └── la-jonction-de-route-illustration-carrefour-intersection-de-l-autoroute-g2wxx1.png
│   │   ├── Person.ctl
│   │   ├── TP3.aliases
│   │   ├── TP3.lvlps
│   │   └── TP3.lvproj
│   └── TP3 ex2
│       ├── EX2.vi
│       ├── LabVIEW Datasheet.pdf
│       ├── TP3.aliases
│       ├── TP3.lvlps
│       └── TP3.lvproj
├── TP4
│   ├── arduino ide
│   │   └── TP4
│   │       └── TP4.ino
│   ├── LabView
│   │   └── defi.vi
│   └── proteus
│       ├── defi.pdsprj.RAKSHA.mekni.workspace
│       ├── Project Backups
│       │   ├── defi [20250426, 17-12-04].pdsprj
│       │   ├── defi [20250503, 15-32-28].pdsprj
│       │   ├── defi [Autosaved].pdsprj
│       │   ├── TP5 [20250504, 17-45-55].pdsprj
│       │   └── TP5 [Autosaved].pdsprj
│       ├── TP5.pdsprj
│       └── TP5.pdsprj.RAKSHA.mekni.workspace
└── TP5
    ├── LabView
    │   ├── Control 1.ctl
    │   ├── Control 2.ctl
    │   ├── EX1.vi
    │   ├── TP5.aliases
    │   ├── TP5.lvlps
    │   └── TP5.lvproj
    ├── Parking Arduino
    │   └── Parcking
    │       └── Parcking.ino
    ├── Project Backups
    │   ├── TP_5 [20250512, 21-41-14].pdsprj
    │   └── TP_5 [Autosaved].pdsprj
    └── proteus
        ├── Backup Of TP_5.pdsbak
        ├── Last Loaded TP_5.pdsbak
        ├── TP_5.pdsprj
        └── TP_5.pdsprj.RAKSHA.mekni.workspace
 ```

