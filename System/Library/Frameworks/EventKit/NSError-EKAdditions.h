//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (EKAdditions)
+ (_Bool)_cal_serializedEntryForKey:(id)arg1 value:(id)arg2 outKey:(id *)arg3 outValue:(id *)arg4;	// IMP=0x0080000000045970
+ (id)errorWithDomain:(id)arg1 code:(unsigned long long)arg2 description:(id)arg3 underlyingError:(id)arg4 reason:(id)arg5;	// IMP=0x008000000006ee5b
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;	// IMP=0x008000000006ee29
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;	// IMP=0x008000000006ee11
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;	// IMP=0x008000000006edf9
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x008000000006ed67
+ (id)errorWithEKErrorCode:(long long)arg1;	// IMP=0x008000000006ed03
+ (id)errorWithCADErrorCode:(int)arg1 description:(id)arg2;	// IMP=0x008000000006ecd1
+ (id)errorWithCADErrorCode:(int)arg1;	// IMP=0x008000000006ec6f
+ (id)errorWithCADResult:(int)arg1;	// IMP=0x008000000006ec18
+ (id)_defaultDescriptionForEKErrorCode:(long long)arg1;	// IMP=0x008000000006e6e8
+ (id)_defaultDescriptionForCADErrorCode:(int)arg1;	// IMP=0x008000000006e638
- (id)cal_serializableError;	// IMP=0x0010000000046000
- (id)cal_serializableUserInfo;	// IMP=0x0010000000045bef
- (struct __SecTrust *)cal_trustInfoCopy;	// IMP=0x001000000004585b
- (_Bool)cal_isCertificateError;	// IMP=0x0010000000045738
@end

