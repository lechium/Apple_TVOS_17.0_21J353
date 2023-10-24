//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface THAController : NSObject
{
    _Bool _supportsSiri;	// 8 = 0x8
    _Bool _connected;	// 9 = 0x9
    _Bool _selected;	// 10 = 0xa
    unsigned int _identifier;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    unsigned long long _ticksPerSecond;	// 24 = 0x18
    NSSet *_selectedButtons;	// 32 = 0x20
}

+ (id)selectButtonConfiguration:(id)arg1 supportsSiri:(_Bool)arg2;	// IMP=0x0060000000729918
- (void).cxx_destruct;	// IMP=0x00000000007298f0
@property(retain, nonatomic) NSSet *selectedButtons; // @synthesize selectedButtons=_selectedButtons;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool supportsSiri; // @synthesize supportsSiri=_supportsSiri;
@property(nonatomic) unsigned long long ticksPerSecond; // @synthesize ticksPerSecond=_ticksPerSecond;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)dispatchButtonEvent:(id)arg1;	// IMP=0x000000000072982c
- (void)updateSelectedButtons:(id)arg1;	// IMP=0x000000000072981a
- (id)initWithName:(id)arg1 identifier:(unsigned int)arg2 ticksPerSecond:(unsigned long long)arg3 supportedButtons:(id)arg4 supportsSiri:(_Bool)arg5;	// IMP=0x000000000072972f

@end

