//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSNoOpPowerAssertion : NSObject
{
}

+ (void)setUseInteractivePowerAssertion:(_Bool)arg1;	// IMP=0x004000000006f97f
- (_Bool)isClear;	// IMP=0x004000000006f9bb
- (void)clear;	// IMP=0x001000000006f9b5
- (void)hold;	// IMP=0x001000000006f9af
- (id)initWithName:(id)arg1 holdDuration:(double)arg2;	// IMP=0x001000000006f9a1
- (id)initWithFormat:(id)arg1;	// IMP=0x001000000006f993
- (id)initWithName:(id)arg1;	// IMP=0x001000000006f985

@end

