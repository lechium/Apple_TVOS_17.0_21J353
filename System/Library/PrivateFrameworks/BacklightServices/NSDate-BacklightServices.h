//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (BacklightServices)
- (_Bool)bls_isOnOrAfter:(id)arg1 andOnOrBefore:(id)arg2 withEpsilon:(double)arg3;	// IMP=0x0030000000009c2b
- (_Bool)bls_isOnOrAfter:(id)arg1 andOnOrBefore:(id)arg2;	// IMP=0x0030000000009bc1
- (long long)bls_compare:(id)arg1 withEpsilon:(double)arg2;	// IMP=0x0030000000009b4c
- (id)bls_fileNameString;	// IMP=0x0030000000009a6f
- (id)bls_shortLoggingString;	// IMP=0x00300000000098d9
- (id)bls_loggingString;	// IMP=0x003000000000962d
- (id)bls_initWithBSContinuousMachTime:(double)arg1;	// IMP=0x00300000000095f1
- (id)bls_initWithMachContinuousTime:(unsigned long long)arg1;	// IMP=0x003000000000959d
@property(readonly, nonatomic) unsigned long long bls_machContinuousTime;
@end
