events = [
    # Monday - Oct 5
    ("20261005", "102000", "111000", "Minor Maths", "Room 412"),
    ("20261005", "114000", "132000", "AI & ML Lab", "Room 301"),
    ("20261005", "132000", "141000", "CS", "Room 301"),
    ("20261005", "150000", "173000", "Comp. Maths Lab, B1", "Data Science Lab"),

    # Tuesday - Oct 6
    ("20261006", "084000", "111000", "CS Lab, B1", ""),
    ("20261006", "114000", "123000", "CS", "Room 301"),
    ("20261006", "123000", "132000", "English", "Room 301"),
    ("20261006", "132000", "141000", "Comp. Maths", "Room 301"),
    ("20261006", "150000", "164000", "Open Elective: RE", "Room 303"),

    # Wednesday - Oct 7
    ("20261007", "114000", "123000", "CS", "Room 301"),
    ("20261007", "123000", "132000", "Comp. Maths", "Room 301"),
    ("20261007", "132000", "141000", "Open Elective: RE", "Room 803"),

    # Thursday - Oct 8
    ("20261008", "114000", "123000", "Mentorship", ""),
    ("20261008", "123000", "132000", "English", "Room 301"),
    ("20261008", "132000", "141000", "Minor Maths", "Room 303"),

    # Friday - Oct 9
    ("20261009", "114000", "123000", "CS", "Room 301"),
    ("20261009", "123000", "132000", "Comp. Maths", "Room 301"),
    ("20261009", "132000", "141000", "Minor Maths", "Room 304"),
    ("20261009", "150000", "173000", "Minor Maths Lab, B1", ""),

    # Saturday - Oct 10
    ("20261010", "084000", "093000", "Comp. Maths", "Room 303"),
    ("20261010", "093000", "102000", "Study Buddy", "Room 301"),
    ("20261010", "102000", "111000", "English", "Room 301"),
    ("20261010", "114000", "123000", "Open Elective: RE", "Room 303")
]

ics_content = [
    "BEGIN:VCALENDAR",
    "VERSION:2.0",
    "PRODID:-//Yuva Single Week Schedule//EN"
]

uid_counter = 1
for date_str, start, end, title, location in events:
    ics_content.extend([
        "BEGIN:VEVENT",
        f"UID:yuva_single_{uid_counter}@schedule",
        f"DTSTAMP:20261003T000000Z",
        f"DTSTART;TZID=Asia/Kolkata:{date_str}T{start}",
        f"DTEND;TZID=Asia/Kolkata:{date_str}T{end}",
        f"SUMMARY:{title}",
        f"LOCATION:{location}",
        "END:VEVENT"
    ])
    uid_counter += 1

ics_content.append("END:VCALENDAR")

with open("yuva_single_week.ics", "w") as f:
    f.write("\n".join(ics_content))

print("yuva_single_week.ics generated! Ready to import.")