//
//  FWCoreBundleDelegate.h
//  FWCore
//
//  Created by Weidong Gu  on 17/04/2017.
//  Copyright © 2017 tw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FWURI.h"

@protocol FWCoreBundleDelegate <NSObject>


@required
- (id)resourceWithURI:(FWURI *)uri;

@end
