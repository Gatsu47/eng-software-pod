#rLoop Pod Firmware
_Lachlan Grogan_

Please make sure you review our [code standards](FIRMWARE/CODE_STANDARD/rloop_code_standard.txt)
and [contributing document.](CONTRIBUTING.md) Also check out our [Confluence page](http://confluence.rloop.org/display/SD/CTRL+Team+Page)

Setup Development Tools:
-----------------------------
1. Get CCS V6.1.2.00015 from the tools folder.
If you are on OS/X check [here](http://processors.wiki.ti.com/index.php/Category:Code_Composer_Studio_v6?keyMatch=CCSV6&tisearch=Search-EN-Everything)
2. When installing make sure you have setup for TI RM4 support


GIT:
-----------------------------
1. Install Git Desktop
2. Clone github.com:rLoopTeamp/eng-software-pod into a folder


CCS - Initial Use
-----------------------------
CCS relies on the notion of a workspace, you need to create a workspace folder and then import the projects into the folder.

1. create a folder at FIRMWARE\WORKSPACE or FIRMWARE\VERIFICATION\WORKSPACE
2. Open CCSV6
3. When prompted, enter the full path to the workspace folder on your local drive.
4. Choose File->Import and select any of the firmware projects under the firmware root or any projects under the verification root.
5. Paths should be good to go.
6. Avoid commiting anything from the WORKSPACE folders and .gitignore is setup to handle this automatically.

Compiler Version
-----------------------------
We are using the TI ARM v15.12.3.LTS (Long Term Support) C Compiler which has already been configured in the project files.

1. Open a CCSV6 workspace
2. Choose Help -> Install new Software
3. From the drop down list box "work with:" Choose --All Available Sites--
4. Expand TI Compiler Updates
5. Select ARM Compiler Tools Version 15.12.3
6. Choose Next/Finish and follow the prompts

Project Description
-----------------------------
- At the top level of the directory there’s FIRMWARE, APPLICATIONS, PodAppLayer, etc. FIRMWARE contains our code that will be on the pod, the others are primarily for emulation with CCS/VS.
- Most of the time, FIRMWARE can be thought of as our root.
- Code not specific to our hyperloop pod (e.g. TSYS01 temp sensor's driver), is located in COMMON_CODE.  
- Within that dir, code is divided up between what is 'RM4' specific (our mcu) versus code that can be used with various mcu’s, 'MULTICORE’.
- PROJECT_CODE is where code unique to our pod should be.
- VERIFICATION will eventually be filled with files meant to test the code in COMMON_CODE and PROJECT_CODE.
- Names of particular drivers/nodes are prepended with a part number. Go to FIRMWARE/COMMON_CODE/MULTICORE/.  
- Everything begins with LCCM (think "Lachlan's Common Code Module") with some mysterious number attached to it, and then a double underscore.
- Next is the category it's under, in this case 'MULTICORE', and another double underscore. 
- Filenames end with a description of the hardware or what exactly the code is doing, e.g. 'TSYS01' or 'Software_CRC'




