//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ExternalDownloadManifest : NSObject
{
    NSArray *_invalidDownloads;	// 8 = 0x8
    NSArray *_validDownloads;	// 16 = 0x10
}

- (_Bool)_parsePropertyList:(id)arg1;	// IMP=0x002000000007af29
@property(readonly) NSArray *validDownloads;
@property(readonly) NSArray *invalidDownloads;
- (void)dealloc;	// IMP=0x001000000007aecb
- (id)initWithValidDownloads:(id)arg1 invalidDownloads:(id)arg2;	// IMP=0x001000000007ae51
- (id)initWithPropertyList:(id)arg1;	// IMP=0x001000000007add1
- (id)init;	// IMP=0x001000000007adbd

@end

