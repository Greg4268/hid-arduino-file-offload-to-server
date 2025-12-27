# HID File Transfer Via Arduino Uno R4 WiFi
![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54) ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) 

> An educational project demonstrating Arduino-based HID automation for file transfers between Windows and web servers - Effectively a homemade rubber ducky for data extraction

![Arduino-to-Server](https://cdn.jsdelivr.net/gh/Greg4268/Arduino_HID_Testing@main/docs/webpage_image.png)

## Educational Purpose

This project is designed for **educational purposes only** to demonstrate:

- Learn more about web servers and arduino 
- Practice my programming 
- Explore different areas of programming and computer science 
- Implement a simple authentication for web server 

The programs demonstrated should only be used on personal devices with understanding of the softwares behavior.

## Project Components

The repository consists of three main parts:

1. **Arduino Code (`offload.cpp`)**
   - Configures an Arduino board to act as a USB HID device
   - Executes PowerShell commands on Windows hosts via Keyboard library
   - Launches the file upload process automatically

2. **PowerShell Script (`script.ps1`)**
   - Scans the Windows desktop for files
   - Creates proper multipart/form-data POST requests
   - Uploads files to the remote server
   - Compatible with older PowerShell versions (<7)

3. **Web Server (`server.py`)**
   - Flask-based file upload server
   - Supports basic authentication
   - Provides a simple web interface for viewing and managing files
   - Demonstrates RESTful API design principles

## What I Learned 

- **Windows Vulnerabilities**: How simply plugging in a usb drive, cable, or usb-connected device could compromise your system
- **HID Programming**: How USB devices can simulate keyboard/mouse inputs
- **PowerShell Automation**: Script execution, file system operations, network requests
- **Web Development**: REST API design, file uploads, authentication implementation

## Getting Started

### Prerequisites

- Arduino board with USB HID capabilities (Uno R4 WiFi, Leonardo, Micro, Pro Micro, etc.)
- Windows computer for testing
- GitHub account for hosting the PowerShell script
- Railway account (or similar) for hosting the server

## Usage Flow

1. Connect Arduino to a Windows computer
2. Arduino executes PowerShell commands to download and run script.ps1
3. PowerShell script scans desktop files (or other specified path) and uploads them to the server
4. Files can be viewed, downloaded, or deleted from the web interface

## Notes

- The server uses Railway's ephemeral filesystem - files will not persist after server restarts

---
