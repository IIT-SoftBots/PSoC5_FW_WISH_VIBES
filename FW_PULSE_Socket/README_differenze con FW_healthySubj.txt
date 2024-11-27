FW to be used with the socket used for haptics (reversible-motor SH able to provide residual current equipped with IMUs on the fingers for vibrotactile fb)

This FW is updated wrt AirChamberFeedback with the commands:

CMD_GET_VIBROTACTILE_INPUTS (250)
SET_GET_VIBROTACTILE_INPUTS (251)

That allows the socket to ask the SH the computed PWM values to drive the vibrotactile actuators.

and the TopDesign is modified to drive also the vibrotactile actuators using the AdditionalGPIO port.

FW is different in the device for 'healthy subjects'.
- è cambiato il sensore di pressione utilizzato, quindi i parametri di rescaling del FW;
- VT1_DIR_Write e VT2_DIR_Write diversi
-commActivate


