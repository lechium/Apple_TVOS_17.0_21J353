//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC18PodcastsFoundation40FairPlayTemporaryKeyStorageProvidingMock : _TtCs12_SwiftObject
{
    MISSING_TYPE *createDirectoryHandler;	// 16 = 0x10
    MISSING_TYPE *removeDirectoryHandler;	// 32 = 0x20
    MISSING_TYPE *directoryExistsHandler;	// 48 = 0x30
    MISSING_TYPE *directoryLocationHandler;	// 64 = 0x40
}

- (id)directoryLocationFor:(long long)arg1;	// IMP=0x00000000000ff5c0
- (_Bool)directoryExistsFor:(long long)arg1;	// IMP=0x00000000000ff430
- (_Bool)removeDirectoryFor:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000ff3a0
- (id)createDirectoryFor:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000ff2d0

@end

