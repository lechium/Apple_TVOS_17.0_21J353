//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APSAWDLogger : NSObject
{
}

+ (id)logger;	// IMP=0x002000000007f35d
- (_Bool)_shouldSubmit;	// IMP=0x002000000007f4ef
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;	// IMP=0x001000000007f479
- (void)_submitMetric:(id)arg1 withIdentifier:(unsigned int)arg2;	// IMP=0x001000000007f467
- (void)logMetric:(id)arg1;	// IMP=0x001000000007f3e1
- (id)init;	// IMP=0x001000000007f3b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

