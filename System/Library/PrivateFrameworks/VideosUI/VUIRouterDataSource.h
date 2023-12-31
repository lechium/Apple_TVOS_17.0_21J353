//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIEventDataSource;

__attribute__((visibility("hidden")))
@interface VUIRouterDataSource : NSObject
{
    VUIEventDataSource *_selectEventDataSource;	// 8 = 0x8
    VUIEventDataSource *_playEventDataSource;	// 16 = 0x10
    VUIEventDataSource *_contextMenuEventDataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006f452
@property(retain, nonatomic) VUIEventDataSource *contextMenuEventDataSource; // @synthesize contextMenuEventDataSource=_contextMenuEventDataSource;
@property(retain, nonatomic) VUIEventDataSource *playEventDataSource; // @synthesize playEventDataSource=_playEventDataSource;
@property(retain, nonatomic) VUIEventDataSource *selectEventDataSource; // @synthesize selectEventDataSource=_selectEventDataSource;
- (id)initWithRouterData:(id)arg1 prefetchedData:(id)arg2;	// IMP=0x000000000006f2df
- (id)initWithRouterData:(id)arg1 appContext:(id)arg2;	// IMP=0x000000000006f103
- (id)initWithLibraryMediaEntity:(id)arg1;	// IMP=0x000000000006f485

@end

