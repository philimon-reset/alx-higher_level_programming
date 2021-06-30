#!/usr/bin/python3
"""
    module containing user class
"""
import models


class User(models.BaseModel):
    """
        User class
    """
    email = ""
    password = ""
    first_name = ""
    last_name = ""
