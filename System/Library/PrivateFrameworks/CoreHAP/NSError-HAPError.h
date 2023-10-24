//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HAPError)
+ (id)errorWithHMErrorCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000e69dc
+ (id)errorWithHMErrorCode:(long long)arg1 reason:(id)arg2 underlyingError:(id)arg3;	// IMP=0x00600000000e65b4
+ (id)errorWithHMErrorCode:(long long)arg1;	// IMP=0x00600000000e6596
+ (id)hapErrorWithCode:(long long)arg1;	// IMP=0x00600000000e655e
+ (id)errorWithOSStatus:(int)arg1;	// IMP=0x00600000000e643d
+ (id)hapErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x00600000000e63b9
+ (id)_userInfoWithDescription:(id)arg1 reason:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;	// IMP=0x00600000000e6133
- (_Bool)isHAPError;	// IMP=0x00100000000e60e8
@end

