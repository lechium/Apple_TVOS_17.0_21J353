//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPMediaLibraryView;

__attribute__((visibility("hidden")))
@interface _MPStoreLibraryPersonalizationAggregateLibraryAddedOperation : MPAsyncOperation
{
    MPMediaLibraryView *_libraryView;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
    vector_1ee95920 _persistentIDs;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x000000000018a7e6
- (void).cxx_destruct;	// IMP=0x000000000018a7ac
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) vector_1ee95920 persistentIDs; // @synthesize persistentIDs=_persistentIDs;
@property(nonatomic) MPMediaLibraryView *libraryView; // @synthesize libraryView=_libraryView;
- (void)execute;	// IMP=0x000000000018a0af

@end

