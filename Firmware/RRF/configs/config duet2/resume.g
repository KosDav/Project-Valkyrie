; resume.g
; called before a print from SD card is resumed
;
; generated by RepRapFirmware Configuration Tool v3.3.10 on Thu Dec 02 2021 19:16:54 GMT+0100 (sentraleuropeisk normaltid)
G1 R1 X0 Y0 Z5 F6000 ; go to 5mm above position of the last print move
G1 R1 X0 Y0 Z0       ; go back to the last print move
M83                  ; relative extruder moves
G1 E1 F1200         ; extrude 10mm of filament

