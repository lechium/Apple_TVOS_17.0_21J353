//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (MSVErrorAdditions)
+ (id)_msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 underlyingErrors:(id)arg4 userInfo:(id)arg5 debugDescriptionFormat:(id)arg6 arguments:(struct __va_list_tag [1])arg7;	// IMP=0x00200000000219b0
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;	// IMP=0x00200000000218f5
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 debugDescription:(id)arg4;	// IMP=0x002000000002183d
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;	// IMP=0x0020000000021785
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;	// IMP=0x00200000000216c6
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;	// IMP=0x0020000000021611
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;	// IMP=0x0020000000021556
+ (id)MSVErrorWithMissingDependencies:(id)arg1;	// IMP=0x0020000000021c51
+ (id)MSVErrorWithMissingDependency:(id)arg1;	// IMP=0x0020000000021b91
@property(readonly, nonatomic) NSString *msv_signature;
- (id)msv_analyticSignature;	// IMP=0x0010000000020001
@property(readonly, nonatomic) NSError *msv_underlyingError;
- (id)msv_description;	// IMP=0x001000000001f9fa
- (id)msv_codeDescription;	// IMP=0x001000000001f853
- (id)msv_firstValueForUserInfoKey:(id)arg1;	// IMP=0x001000000001f672
- (id)msv_errorByUnwrappingDomain:(id)arg1 code:(long long)arg2;	// IMP=0x001000000001f614
- (id)msv_errorByUnwrappingDomain:(id)arg1;	// IMP=0x001000000001f407
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;	// IMP=0x001000000001f2d7
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;	// IMP=0x001000000001f1b6
- (id)msv_errorByRemovingUnsafeUserInfo;	// IMP=0x001000000001ef5f
@end

