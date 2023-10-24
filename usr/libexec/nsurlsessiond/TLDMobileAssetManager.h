//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TLDMobileAssetManager : NSObject
{
    unsigned long long _installedAssetVersion;	// 8 = 0x8
}

@property unsigned long long installedAssetVersion; // @synthesize installedAssetVersion=_installedAssetVersion;
- (void)moveInstalledAsset:(id)arg1 withVersion:(unsigned long long)arg2;	// IMP=0x0010000000039fdd
- (void)moveFileAtomically:(id)arg1 toLocation:(id)arg2;	// IMP=0x0010000000039cf6
- (void)downloadAsset:(id)arg1;	// IMP=0x0010000000039b90
- (void)findBestAssetFrom:(id)arg1 skipDownload:(_Bool)arg2;	// IMP=0x001000000003934f
- (void)queryAndFindBestAsset:(_Bool)arg1;	// IMP=0x001000000003916c
- (id)init;	// IMP=0x001000000003900b

@end

