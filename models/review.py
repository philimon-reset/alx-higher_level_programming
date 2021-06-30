#!/usr/bin/python3
import models


class Review(models.BaseModel):
    """
        Review class
    """
    place_id = ""
    user_id = ""
    text = ""
