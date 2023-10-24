//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXSSKeyChord, VOSCommand, VOSCommandResolver, VOSGesture;

@interface VOTEventUserCommandContext : NSObject
{
    VOSCommand *_command;	// 8 = 0x8
    VOSGesture *_gesture;	// 16 = 0x10
    AXSSKeyChord *_keyChord;	// 24 = 0x18
    VOSCommandResolver *_resolver;	// 32 = 0x20
}

+ (id)contextWithCommand:(id)arg1 gesture:(id)arg2 keyChord:(id)arg3 resolver:(id)arg4;	// IMP=0x0040000000016157
- (void).cxx_destruct;	// IMP=0x00200000000162a0
@property(retain, nonatomic) VOSCommandResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) AXSSKeyChord *keyChord; // @synthesize keyChord=_keyChord;
@property(retain, nonatomic) VOSGesture *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) VOSCommand *command; // @synthesize command=_command;

@end

