-- 코드를 작성해주세요
select
    ii.item_id,
    ii.item_name 
from
    item_info ii join item_tree it
where
    ii.item_id = it.item_id
    and it.PARENT_ITEM_ID is null;