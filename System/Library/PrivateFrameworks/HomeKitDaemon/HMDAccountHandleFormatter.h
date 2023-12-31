//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAccountHandleFormatter : NSFormatter
{
}

+ (id)defaultFormatter;	// IMP=0x0010000000c65474
- (id)privateStringForObjectValue:(id)arg1;	// IMP=0x0000000000c6574d
- (id)accountHandleFromString:(id)arg1;	// IMP=0x0000000000c656e5
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x0000000000c655ae
- (id)stringForObjectValue:(id)arg1;	// IMP=0x0000000000c6548e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

