//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString, PFFairPlayAsset;

@interface _TtC18PodcastsFoundation22FairPlayKeySessionMock : _TtCs12_SwiftObject
{
    MISSING_TYPE *id;	// 16 = 0x10
    MISSING_TYPE *adamIDHandler;	// 32 = 0x20
    MISSING_TYPE *assetHandler;	// 48 = 0x30
    MISSING_TYPE *bypassCacheHandler;	// 64 = 0x40
    MISSING_TYPE *keyStoreFilePathHandler;	// 80 = 0x50
    MISSING_TYPE *registerHandler;	// 96 = 0x60
    MISSING_TYPE *deregisterHandler;	// 112 = 0x70
    MISSING_TYPE *processHandler;	// 128 = 0x80
    MISSING_TYPE *stopAndInvalidateHandler;	// 144 = 0x90
}

- (void)stopAndInvalidateKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000979f0
- (void)processKeyWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000097940
- (void)deregister;	// IMP=0x0000000000097900
- (void)register;	// IMP=0x00000000000978c0
@property(nonatomic, readonly) NSString *keyStoreFilePath;
@property(nonatomic) _Bool bypassCache;
@property(nonatomic, readonly) PFFairPlayAsset *asset;
@property(nonatomic, readonly) NSString *id;

@end

