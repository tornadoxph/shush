#include"БъЭЗ.h"
int main() {
	MusicMenu();
	
	ExMessage m;
	while (true)
	{

		m = getmessage(EM_MOUSE | EM_KEY);
		switch (m.message)
		{
		case WM_LBUTTONDOWN:
			if (m.x > 360 && m.x < 660 && m.y>500 && m.y < 600) {
				background_music(&music);
			}
			break;
		}
	}
}