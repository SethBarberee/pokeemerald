WolfeNurseryShop_MapScripts::
	.byte 0
WolfeNurseryShop_EventScript_Cashier::
        lock
        faceplayer
        message WolfeNurseryShop_Text_Greeting
        waitmessage
        pokemart Pokemart_BerryShop
        msgbox WolfeNurseryShop_Text_End, MSGBOX_DEFAULT
        release
        end
WolfeNurseryShop_EventScript_Camper::
	msgbox WolfeNurseryShop_Text_Trees, MSGBOX_NPC
	end
WolfeNurseryShop_EventScript_OldLady::
	msgbox WolfeNurseryShop_Text_OldLady, MSGBOX_NPC
	end
WolfeNurseryShop_EventScript_Beauty::
	msgbox WolfeNurseryShop_Text_Beauty, MSGBOX_NPC
	end

        .align 2
Pokemart_BerryShop:
        .2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE
	release
	end

WolfeNurseryShop_Text_Greeting:
        .string "Welcome to our Berry Shop.\n"
	.string "How can I help you?$"
WolfeNurseryShop_Text_End:
	.string "Please come again!$"
WolfeNurseryShop_Text_OldLady:
	.string "This shop is so soothing\n"
        .string "with all the flowers and trees$"
WolfeNurseryShop_Text_Beauty:
	.string "Any idea what flower is best for my hair?$"
WolfeNurseryShop_Text_Trees:
	.string "Did you know that they grow trees?$"
