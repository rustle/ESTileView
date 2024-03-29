//
//  ESInternalTileView.h
//
//  Created by Doug Russell
//  Copyright (c) 2011 Doug Russell. All rights reserved.
//  
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//  http://www.apache.org/licenses/LICENSE-2.0
//  
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//  

#import <UIKit/UIKit.h>
#import "ESTileView.h"

@interface ESInternalTileView : UIScrollView

@property (WEAK, nonatomic) id<ESTileViewDataSource> dataSource;
@property (assign, nonatomic) id<ESTileViewDelegate> delegate;
@property (assign, nonatomic) CGSize tileSize;
@property (assign, nonatomic) NSInteger numberOfRows;
@property (assign, nonatomic) NSInteger numberOfColumns;
@property (assign, nonatomic) ESTileViewAlignment alignment;

- (UIView *)dequeueReusableTile;
- (void)reloadData;
- (NSArray *)visibleTiles;
- (void)scrollToTileAtRow:(NSInteger)row column:(NSInteger)column;
- (void)scrollToTileAtRow:(NSInteger)row column:(NSInteger)column animated:(BOOL)animated;

@end
