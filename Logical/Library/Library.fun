
{REDUND_ERROR} FUNCTION_BLOCK DRIVE (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		ENABLE : BOOL;
		STATE : UINT;
	END_VAR
	VAR_OUTPUT
		COMMAND : UINT;
		real_motor_speed : INT;
	END_VAR
END_FUNCTION_BLOCK
