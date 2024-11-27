FW del socket con solo toast. 
è predisdposto anche per funzionare con le camerine (WISH), ma nel socket non sono montate quindi quella parte di codice non viene utilizzata

Difference with WISH+VIBES socket FW is that the port pins here were assigend differently. (Master mode port 48 or 50 for example)

FW to be used with the socket used for haptics (reversible-motor SH able to provide residual current equipped with IMUs on the fingers for vibrotactile fb)
This FW is updated wrt AirChamberFeedback with the commands:

CMD_GET_VIBROTACTILE_INPUTS (250)
SET_GET_VIBROTACTILE_INPUTS (251)

That allows the socket to ask the SH the computed PWM values to drive the vibrotactile actuators.

and the TopDesign is modified to drive also the vibrotactile actuators using the AdditionalGPIO port.


Difference with WISH+VIBES socket FW is that the port pins here were assigend differently. (Master mode port 48 or 50 for example)

