//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSArray, NSString;

@interface NSError (HMFError)
+ (id)hmfUnspecifiedError;	// IMP=0x001000000000be22
+ (id)hmfErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x001000000000bdfc
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;	// IMP=0x001000000000bb8b
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3;	// IMP=0x001000000000bb76
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2;	// IMP=0x001000000000bb61
+ (id)hmfErrorWithCode:(long long)arg1;	// IMP=0x001000000000bb4d
+ (id)hmf_errorWithException:(id)arg1;	// IMP=0x001000000000b89d
+ (id)shortDescription;	// IMP=0x0010000000045ab8
+ (id)hmf_unarchiveFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000045a4b
@property(readonly, nonatomic, getter=isHMFError) _Bool hmfError;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end
