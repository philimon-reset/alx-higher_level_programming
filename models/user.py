#!/usr/bin/python3
import models

class User(models.BaseModel):
    """
        User class
    """
    email = ""
    password = ""
    first_name = ""
    last_name = ""
