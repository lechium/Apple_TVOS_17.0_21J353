//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPModelLibraryEndCollaborationChangeRequest;

__attribute__((visibility("hidden")))
@interface MPModelLibraryEndCollaborationChangeRequestOperation : MPAsyncOperation
{
    CDUnknownBlockType _responseHandler;	// 8 = 0x8
    MPModelLibraryEndCollaborationChangeRequest *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c40d9
@property(copy, nonatomic) MPModelLibraryEndCollaborationChangeRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
- (void)execute;	// IMP=0x00000000001c3df0

@end

