//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSString, PGGraphMomentNodeCollection, PGGraphPersonNodeCollection;

@protocol PGGraphIngestPet <NSObject>
@property(readonly, nonatomic) PGGraphPersonNodeCollection *ownerNodes;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property(readonly, nonatomic) unsigned long long species;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *name;
- (void)addOwnerNodes:(PGGraphPersonNodeCollection *)arg1;
@end
