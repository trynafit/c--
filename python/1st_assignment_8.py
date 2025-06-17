def adjust_temperature (ct, pt):
      if (ct == pt):
           print("No action needed")
      elif(ct < pt):
           print("Turn on heating")
      elif(ct > pt):
           print("Turn on cooling")
      else:
           ("Invalid Data")
adjust_temperature (35,30)