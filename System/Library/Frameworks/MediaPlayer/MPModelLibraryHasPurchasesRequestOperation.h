//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPModelLibraryHasPurchasesRequest;

__attribute__((visibility("hidden")))
@interface MPModelLibraryHasPurchasesRequestOperation : MPAsyncOperation
{
    MPModelLibraryHasPurchasesRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e9bcf
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryHasPurchasesRequest *request; // @synthesize request=_request;
- (void)execute;	// IMP=0x00000000001e8eb9

@end

