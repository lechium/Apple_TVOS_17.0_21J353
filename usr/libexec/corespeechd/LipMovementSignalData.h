//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface LipMovementSignalData : NSObject
{
    _Bool _hadLipMovement;	// 8 = 0x8
    unsigned long long _startTime;	// 16 = 0x10
    unsigned long long _endTime;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) _Bool hadLipMovement; // @synthesize hadLipMovement=_hadLipMovement;
- (id)initWithLipMovement:(_Bool)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00100000000aacbe

@end

