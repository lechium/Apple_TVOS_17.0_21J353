//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (HealthKit)
- (id)_hk_valueForSafeValueForKeyPath:(id)arg1;	// IMP=0x007000000014e486
- (id)hk_classNameWithTag:(id)arg1;	// IMP=0x007000000014e3fd
- (_Bool)hk_expectMissingKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014e36f
- (id)hk_safeNumberIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014e306
- (id)hk_safeStringIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014e29d
- (id)hk_safeDictionaryIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014e234
- (id)hk_safeArrayIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014e1cb
- (id)hk_safeValueIfExistsForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x007000000014e144
- (id)hk_safeNumberForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014e0bb
- (id)hk_safeStringForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014e032
- (id)hk_safeDictionaryForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014dfa9
- (id)hk_safeArrayForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000014df20
- (id)hk_safeValueForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x007000000014de97
- (_Bool)hk_hasValueForKeyPath:(id)arg1;	// IMP=0x007000000014de64
@end

