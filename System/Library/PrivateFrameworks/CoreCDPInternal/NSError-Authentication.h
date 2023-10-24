//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (Authentication)
@property(readonly, nonatomic) _Bool isAuthKitUnableToPromptDueToNetworkError;
@property(readonly, nonatomic) _Bool isAuthKitUnableToPromptError;
@property(readonly, nonatomic) _Bool isAuthenticationError;
- (_Bool)isRecordNotViableError;	// IMP=0x00300000000156e5
- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;	// IMP=0x003000000001558e
- (_Bool)isRecoveryPETSoftLimitError;	// IMP=0x0030000000015516
- (_Bool)isRecoveryPETHardLimitError;	// IMP=0x003000000001549e
- (_Bool)isCoolDownError;	// IMP=0x00300000000153d4
- (_Bool)isLoginSoftLimit;	// IMP=0x00300000000153c2
- (_Bool)isLoginHardLimit;	// IMP=0x00300000000153b0
- (_Bool)isICSCInvalidError;	// IMP=0x0030000000015338
- (_Bool)isICSCRecoveryHardLimitError;	// IMP=0x003000000001526e
@end

