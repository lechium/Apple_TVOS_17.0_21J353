//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _VOTBrailleManagerStatus : NSObject
{
    unsigned char _general;	// 8 = 0x8
    unsigned char _text;	// 9 = 0x9
    unsigned char _realtime;	// 10 = 0xa
    _Bool _showGeneral;	// 11 = 0xb
    _Bool _showText;	// 12 = 0xc
    _Bool _showRealtime;	// 13 = 0xd
    _Bool _realtimeBlinking;	// 14 = 0xe
    _Bool _realtimeBlinkIsUp;	// 15 = 0xf
    _Bool _bluetoothBrailleDisplayConnected;	// 16 = 0x10
    unsigned long long _realtimeSpinnerCount;	// 24 = 0x18
    NSMutableDictionary *_generalDict;	// 32 = 0x20
    NSMutableDictionary *_textDict;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000eccd7
@property(nonatomic) _Bool bluetoothBrailleDisplayConnected; // @synthesize bluetoothBrailleDisplayConnected=_bluetoothBrailleDisplayConnected;
@property(retain, nonatomic) NSMutableDictionary *textDict; // @synthesize textDict=_textDict;
@property(retain, nonatomic) NSMutableDictionary *generalDict; // @synthesize generalDict=_generalDict;
@property(nonatomic) unsigned long long realtimeSpinnerCount; // @synthesize realtimeSpinnerCount=_realtimeSpinnerCount;
@property(nonatomic) _Bool realtimeBlinkIsUp; // @synthesize realtimeBlinkIsUp=_realtimeBlinkIsUp;
@property(nonatomic) _Bool realtimeBlinking; // @synthesize realtimeBlinking=_realtimeBlinking;
@property(nonatomic) _Bool showRealtime; // @synthesize showRealtime=_showRealtime;
@property(nonatomic) _Bool showText; // @synthesize showText=_showText;
@property(nonatomic) _Bool showGeneral; // @synthesize showGeneral=_showGeneral;
@property(nonatomic) unsigned char realtime; // @synthesize realtime=_realtime;
@property(nonatomic) unsigned char text; // @synthesize text=_text;
@property(nonatomic) unsigned char general; // @synthesize general=_general;

@end

