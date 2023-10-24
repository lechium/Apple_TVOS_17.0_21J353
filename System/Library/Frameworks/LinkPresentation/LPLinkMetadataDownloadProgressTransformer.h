//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPLinkMetadata;

__attribute__((visibility("hidden")))
@interface LPLinkMetadataDownloadProgressTransformer : NSObject
{
    unsigned long long _bytesLoaded;	// 8 = 0x8
    LPLinkMetadata *_metadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007a18e
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned long long bytesLoaded; // @synthesize bytesLoaded=_bytesLoaded;
- (id)downloadProgressForTransformer:(id)arg1;	// IMP=0x000000000007a09c
- (id)initWithBytesLoaded:(unsigned long long)arg1 downloadState:(long long)arg2 metadata:(id)arg3;	// IMP=0x0000000000079fff

@end
