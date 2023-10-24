//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AAFPromise, CNMonogrammer, FAFamilyMemberPhotoRequest, FAFetchFamilyCircleOperation;

@protocol FAFetchFamilyPhotoOperationContext <NSObject>
- (CNMonogrammer *)monogrammerWithStyle:(long long)arg1 diameter:(double)arg2;
- (AAFPromise *)runFetchFamilyCircleOperation:(FAFetchFamilyCircleOperation *)arg1;
- (void)runAAFamilyMemberPhotoRequest:(FAFamilyMemberPhotoRequest *)arg1 withCompletionHandler:(void (^)(AARequest *, AAResponse *, NSError *))arg2;
@end

