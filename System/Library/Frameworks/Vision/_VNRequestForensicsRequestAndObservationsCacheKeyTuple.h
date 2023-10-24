//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNRequest;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject
{
    VNRequest *_request;	// 8 = 0x8
    id <NSObject><NSCopying> _observationsCacheKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003a8c4
@property(readonly, nonatomic) id <NSObject><NSCopying> observationsCacheKey; // @synthesize observationsCacheKey=_observationsCacheKey;
@property(readonly, nonatomic) VNRequest *request; // @synthesize request=_request;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003a7c8
- (unsigned long long)hash;	// IMP=0x000000000003a737
- (id)description;	// IMP=0x000000000003a6a4
- (id)initWithRequest:(id)arg1 observationsCacheKey:(id)arg2;	// IMP=0x000000000003a5fb

@end

