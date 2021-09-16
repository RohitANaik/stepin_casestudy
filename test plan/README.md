# HIGH level test plan
|TEST ID|DESCRIPTION|EXP i/p|EXP o/p|Actual o/p|
|-------|-----------|-------|-------|----------|
|H_01|LED ON or OFF|button sensor On|led off|led off|
|  |  |temperature sensor Off|led off|led off|
|-------|-----------|-------|-------|----------|
|H_02|LED ON or OFF|button sensor Off|led off|led off|
|  |  |temperature sensor On|led off|led off|
|-------|-----------|-------|-------|----------|
|H_03|LED ON or OFF|button sensor On|led on|led on|
|  |  |temperature sensor On|||
|-------|-----------|-------|-------|----------|
|H_04|display temperature|button sensor On|temperature |temperature|
|  |  |temperature sensor On|||
|-------|-----------|-------|-------|----------|

# LOW level requirements
|TEST ID|DESCRIPTION|EXP i/p|EXP o/p|Actual o/p|
|-------|-----------|-------|-------|----------|
|L_01|temperature values|potentiometer|temperature change|temperature change|
|-------|-----------|-------|-------|----------|

