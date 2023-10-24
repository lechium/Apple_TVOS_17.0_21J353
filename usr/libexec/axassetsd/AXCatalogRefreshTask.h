//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface AXCatalogRefreshTask
{
    NSNumber *_overrideTimeout;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000003047
@property(retain, nonatomic) NSNumber *overrideTimeout; // @synthesize overrideTimeout=_overrideTimeout;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000000300e
- (void)_refreshCatalog:(_Bool)arg1;	// IMP=0x0010000000002e71
- (id)initWithPolicy:(id)arg1 forceCatalogRefresh:(_Bool)arg2 context:(id)arg3;	// IMP=0x0010000000002de8

@end

