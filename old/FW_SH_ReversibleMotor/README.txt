Generic_FW to be used with reversible-motor SH used for haptics, able to provide residual current values and equipped with IMUs on index and thumb for vibrotactile fb.

This FW is updated with functions that process accelerations value for haptic feedback

and with the commands:

CMD_GET_VIBROTACTILE_INPUTS (250)
SET_GET_VIBROTACTILE_INPUTS (251)

That allows the socket to ask the SH the computed PWM values to drive the vibrotactile actuators.