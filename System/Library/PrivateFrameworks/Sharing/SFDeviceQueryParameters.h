//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAssetQuery, NSString;

__attribute__((visibility("hidden")))
@interface SFDeviceQueryParameters : NSObject
{
    _Bool _installedOnly;	// 8 = 0x8
    _Bool _imperfectMatch;	// 9 = 0x9
    _Bool _fallback;	// 10 = 0xa
    MAAssetQuery *_maQuery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006ad25
@property(readonly, nonatomic) _Bool fallback; // @synthesize fallback=_fallback;
@property(readonly, nonatomic) _Bool imperfectMatch; // @synthesize imperfectMatch=_imperfectMatch;
@property(readonly, nonatomic) _Bool installedOnly; // @synthesize installedOnly=_installedOnly;
@property(readonly, nonatomic) MAAssetQuery *maQuery; // @synthesize maQuery=_maQuery;
@property(readonly, nonatomic) NSString *queryType;
- (unsigned long long)hash;	// IMP=0x000000000006ac56
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006aa9e
- (id)description;	// IMP=0x000000000006a96e
- (id)maAssetQueryDescription;	// IMP=0x000000000006a7ca
- (id)initWithDeviceAssetQuery:(id)arg1 installedOnly:(_Bool)arg2 imperfectMatch:(_Bool)arg3 fallback:(_Bool)arg4;	// IMP=0x000000000006a687

@end

