//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CPLEngineParameters : NSObject
{
    NSURL *;	// 8 = 0x8
    NSURL *_cloudLibraryStateStorageURL;	// 16 = 0x10
    NSURL *_cloudLibraryResourceStorageURL;	// 24 = 0x18
    NSString *_libraryIdentifier;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001b1fe
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // @synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // @synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL;
@property(readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // @synthesize clientLibraryBaseURL=_clientLibraryBaseURL;
- (_Bool)matchesParameters:(id)arg1;	// IMP=0x001000000001b01a
- (id)redactedDescription;	// IMP=0x001000000001af66
- (id)description;	// IMP=0x001000000001aeb2
@property(readonly, nonatomic) id asPlist;
- (id)initWithPlist:(id)arg1;	// IMP=0x001000000001aac3
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5;	// IMP=0x001000000001a9a9

@end

