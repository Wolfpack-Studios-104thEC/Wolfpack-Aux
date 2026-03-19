class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 6;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.33;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 8;
				material = -1;
				name = "spine1";
				passThrough = 0.33;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 8;
				material = -1;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.5;
				radius = 0;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 8;
				material = -1;
				name = "arms";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitHands: HitArms
			{
				armor = 8;
				material = -1;
				name = "hands";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLeftArm: HitHands
			{
				material = -1;
				name = "hand_l";
				passThrough = 0.7;
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitRightArm: HitLeftArm
			{
				material = -1;
				name = "hand_r";
				passThrough = 0.7;
				radius = 0.08;
				minimalHit = 0.01;
				depends = "";
			};
			class HitLegs: HitHands
			{
				armor = 8;
				material = -1;
				name = "legs";
				passThrough = 0.7;
				radius = 0.14;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
			};
			class HitLeftLeg: HitLegs
			{
				material = -1;
				name = "leg_l";
				radius = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
			};
			class HitRightLeg: HitLeftLeg
			{
				material = -1;
				name = "leg_r";
				passThrough = 0.7;
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};
