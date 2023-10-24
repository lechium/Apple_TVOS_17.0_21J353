//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (AppleAccount)
+ (id)aa_errorWithServerResponse:(id)arg1;	// IMP=0x0080000000038a35
+ (id)aa_errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0080000000038962
+ (id)aa_errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0080000000038939
+ (id)aa_errorWithCode:(long long)arg1;	// IMP=0x0080000000038910
- (id)aa_partialErrorsByName;	// IMP=0x0010000000039112
- (_Bool)aa_isAACustodianRecoveryErrorWithCode:(long long)arg1;	// IMP=0x0010000000039099
- (_Bool)aa_isAACustodianRecoveryError;	// IMP=0x001000000003904b
- (_Bool)aa_isAASignInErrorWithCode:(long long)arg1;	// IMP=0x0010000000038fd2
- (_Bool)aa_isAAErrorWithCode:(long long)arg1;	// IMP=0x0010000000038f59
- (id)_aa_userReadableError;	// IMP=0x0010000000038d05
@end
